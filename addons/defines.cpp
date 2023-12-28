/*
    Fichier: defines.hpp
    Auteurs: Admors for Arma 3 (Bohemia Interactive)
    Publique: Non

    Description: Merci de ne pas {Copier,Modifier,Plagier} le contenue suivant sans l'autorisation au préalable de l'Administrateur en charge.       
*/

/*
	Type Music
*/
    #define ATMOS musicClass = "AMP_ATMOSPHERE";
    #define EPIC musicClass = "AMP_EPIC";
	#define MELODIOUS musicClass = "AMP_MELODIOUS";
	#define OTHERS musicClass = "AMP_OTHERS";
	#define STEALTHY musicClass = "AMP_STEALTHY";
/*
	Define Music
*/
	#define MUSIC(CLASSNAME, NAME, TYPE, LOC, TIME) \
	class AMP_##CLASSNAME## \
	{ \
	    name = NAME; \
        sound[] = {##LOC##, 1, 1}; \
        duration = ##TIME##; \
        ##TYPE## \
	};