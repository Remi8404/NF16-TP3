typedef struct Sommet{
  int id;
  struct Sommet *s; //sommet suivant (ordre croissant)
  struct Voisin *v;
};

typedef struct Voisin{
  int id;
  struct Voisin *v;
};

typedef struct Graphe{
  struct Sommet *s;//1er sommet du graphe
};

