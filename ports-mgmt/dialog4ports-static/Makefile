# $FreeBSD: ports-mgmt/dialog4ports-static/Makefile 341616 2014-01-28 16:22:19Z mat $

PKGNAMESUFFIX=	-static

COMMENT=	Console Interface to configure ports (static version for chroots)

MASTERDIR=	${.CURDIR}/../dialog4ports
DESCR=		${.CURDIR}/pkg-descr
MAKE_ENV+=	NO_SHARED=yes
D4P_SLAVE=	yes

PLIST_FILES=	bin/dialog4ports-static

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/dialog4ports \
		${STAGEDIR}${PREFIX}/bin/dialog4ports-static

.include "${MASTERDIR}/Makefile"
