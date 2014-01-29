# Created by: Alexey V. Degtyarev
# $FreeBSD: mail/roundcube-mvision2/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	mvision2
PORTVERSION=	2
CATEGORIES=	mail
MASTER_SITES=	http://roundcubethemes.net/downloads/ \
		ftp://renatasystems.org/pub/FreeBSD/ports/distfiles/
PKGNAMEPREFIX=	roundcube-

MAINTAINER=	alexey@renatasystems.org
COMMENT=	Theme for RoundCube Web Mail

RUN_DEPENDS=	roundcube>=0.2:${PORTSDIR}/mail/roundcube

NO_BUILD=	yes

WWWDIR?=	${PREFIX}/www/roundcube/skins/mvision2_en

SUB_FILES=	pkg-message

# This target is only meant to be used by the port maintainer.
x-generate-plist: build
	cd ${WRKDIR}/mvision2_en; \
	${FIND} . ! -type d ! -name '*.orig' | ${SORT} | \
		${SED} -e "s,^\.,%%WWWDIR%%," >${.CURDIR}/pkg-plist.tmp ; \
	${FIND} . -type d | ${SORT} -r | ${SED} \
		-e "s,^\.$$,@dirrmtry %%WWWDIR%%," \
		-e "s,^\.,@dirrm %%WWWDIR%%," >>${.CURDIR}/pkg-plist.tmp

NO_STAGE=	yes
do-install:
	${MKDIR} ${WWWDIR}
	cd ${WRKDIR}/mvision2_en && ${PAX} -r -w . \
		${WWWDIR}
	${FIND} ${WWWDIR} -type f -exec ${CHMOD} 0644 {} \;
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
