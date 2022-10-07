#include <iostream>
#include <vector>

using namespace std;

class node
{
    public:
        int data;
        node* next;
        bool visited;
        int d;
};

void insertnode(node **vertex, int element, int edge_data)
{
    node *newnode, *current;

    newnode = new node;

    newnode->data = element;
    newnode->d = edge_data;

    if(*vertex == NULL)
    {
        *vertex = newnode;
        newnode->next = NULL;
    }
    else
    {
        current = *vertex;
        while((current->next) != NULL)
        {
            current = current->next;
        }

        current->next = newnode;
        newnode->next = NULL;
    }
}

void display(node *vertex)
{
    node *current;
    current = new node;

    cout << "HEAD --> ";
    current = vertex;
    while(current != NULL)
    {
        cout << "( " << current->data << " , " << current->d << " )" << " --> ";
        current = current->next;
    }
    cout << "NULL";
}

void prims(node **vertex, int n)
{
    int i;
    int j;
    int k;
    int u;
    int c;
    int x[n];
    int edge;
    int cost;

    vector<int> e;
    vector<int> v;

    for(i = 0; i < n; i++)
    {
        vertex[i]->visited = false;
        vertex[i]->d = 0;
        x[i] = -1;
    }

    node *current;

    current = vertex[0];
    current = current->next;

    while(current != NULL)
    {
        for(i = 0; i < n; i++)
        {
           if(vertex[i]->data == current->data)
            {
                vertex[i]->d = current->d;
                x[i] = vertex[0]->data;
                break;
            }
        }

        current = current->next;
    }

    v.push_back(vertex[0]->data);
    vertex[0]->visited = true;

    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n; j++)
        {
            c = 0;
            edge = 0;

            if(vertex[j]->visited == false)
            {
                for(k = 0; k < n; k++)
                {
                    if((vertex[k]->d < vertex[j]->d) && (vertex[k]->visited == false))
                    {
                        if(vertex[k]->d != 0 && vertex[j]->d != 0)
                        {
                            c = 1;
                            break;
                        }
                    }

                    if(vertex[k]->d != 0 && vertex[j]->d == 0)
                    {
                        c = 1;
                        break;
                    }
                }

                if(c == 0)
                {
                    if((edge == 0) || (vertex[j]->d < edge))
                    {
                        u = vertex[j]->data;
                        edge = vertex[j]->d;
                    }
                }
            }
        }

        for(j = 0; j < n; j++)
        {
            if(vertex[j]->data == u)
            {
                current = vertex[j];
                vertex[j]->visited = true;
                break;
            }
        }

        e.push_back(edge);
        v.push_back(u);

        current = current->next;

        while(current != NULL)
        {
            for(j = 0; j < n; j++)
            {
                if(vertex[j]->data == current->data)
                {
                    break;
                }
            }

            if((vertex[j]->d == 0 || (vertex[j]->d > (edge + current->d))) && vertex[j]->visited == false)
            {
                vertex[j]->d = current->d;
                x[j] = u;
            }

            current = current->next;
        }
    }
}

int main()
{
    int n;
    int i;
    int j;
    int adj;
    int data;
    int edge_data;

    cout << "ENTER NUMBER OF VERTICES : ";
    cin >> n;

    cout << endl << "ENTER THE VERTICES : ";

    node *vertex[n];
    int edge[n];

    for(i = 0; i < n; i++)
    {
        vertex[i] = NULL;
    }

    for(i = 0; i < n; i++)
    {
        cin >> data;
        insertnode(&vertex[i],data,0);
    }

    cout << endl << "ENTER NUMBER OF EDGES FOR EACH VERTEX : " << endl << endl;

    for(i = 0; i < n; i++)
    {
        cout << "NUMBER OF EDGES FOR VERTEX " << i+1 << " : ";
        cin >> edge[i];
    }

    cout << endl << "ENTER THE EDGE DATA : " << endl << endl;

    for(i = 0; i < n; i++)
    {
        j = edge[i];
        if(j > 0)
        {
            cout << "ENTER THE VERTICES CONNECTING VERTEX " << i+1 << " : ";
            cout << endl;
        }
        else
        {
            cout << "NO EDGES FOR VERTEX " << i+1 << endl;
        }
        while(j > 0)
        {
            cout << "ENTER EDGE : ";
            cin >> adj;
            cout << "ENTER PATH LENGTH : ";
            cin >> edge_data;
            insertnode(&vertex[i],adj,edge_data);
            j--;
        }
    }

    cout << endl << "ADJACENT LIST : " << endl << endl;
    for(i = 0; i < n; i++)
    {
        display(vertex[i]);
        cout << endl;
    }

    cout << endl << "PRIMS ALGORITHM" << endl << endl;
    prims(vertex,n);

    cout << endl << "DISPLAY" << endl << endl;

    for(i = 0; i < n; i++)
    {
        display(vertex[i]);
        cout << endl;
    }

    return 0;
}
