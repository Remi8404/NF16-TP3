//déclaration des structures
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

//Prototypes des fonctions
//Fonctions demandées
graphe* creerGraphe(); 

void creerSommet(graphe *g, int id);

sommet* rechercherSommet(graphe g, int id);

void ajouterArete(graphe *g, int id1, int id2);

graphe* construireGraphe(int N);

void afficherGraphe(graphe g);

int rechercherDegre(graphe g);

void supprimerSommet(graphe *g, int id);

int contientBoucle(graphe g);

void fusionnerSommet(graphe *g, int idSommet1, int idSommet2);

//Fonctions rajoutées
