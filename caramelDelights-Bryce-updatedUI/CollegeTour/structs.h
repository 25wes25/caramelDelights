#ifndef STRUCTS_H
#define STRUCTS_H

//struct of colleges and their distance from
//the node they are on
struct distances
{
    QString collegeName;
    float distance;
};

struct souv
{
    QString item;
    float price;
    int quantity;
};

//This is the struct that holds all the above
//structs in vector data. distance-being the distance
//from the selected college
//and souveniers holding the total of purchased items
struct colleges
{
    QString collegeName;
    bool visited;
    QVector<distances> distance;
};

#endif // STRUCTS_H
