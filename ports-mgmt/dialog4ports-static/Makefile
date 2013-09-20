# $FreeBSD: ports-mgmt/dialog4ports-static/Makefile 327356 2013-09-15 19:03:55Z crees $

PKGNAMESUFFIX=	-static

COMMENT=	Console Interface to configure ports (static version for chroots)

MASTERDIR=	${.CURDIR}/../dialog4ports
DESCR=		${.CURDIR}/pkg-descr
MAKE_ENV+=	NO_SHARED=yes
D4P_SLAVE=	yes

PLIST_FILES=	bin/dialog4ports-static

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/dialog4ports \
		${PREFIX}/bin/dialog4ports-static

.include "${MASTERDIR}/Makefile"
