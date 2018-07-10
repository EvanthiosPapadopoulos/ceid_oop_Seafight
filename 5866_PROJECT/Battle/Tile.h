#ifndef TILE_H
#define TILE_H


class Tile
{
    public:
        enum tiles {sea = 1, ship = 2, hit = 3, miss = 4 };
        int type;
        Tile();
        virtual ~Tile();
        char draw(int x);
        void setType(int x);
        int getType();

    protected:

    private:

};

#endif // TILE_H
