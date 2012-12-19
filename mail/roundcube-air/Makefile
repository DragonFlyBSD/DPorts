# New ports collection makefile for:	air
# Date created:				Fri 14 Aug 2009
# Whom:					Alexey V. Degtyarev
#
# $FreeBSD: ports/mail/roundcube-air/Makefile,v 1.3 2012/11/17 05:59:13 svnexp Exp $
#

PORTNAME=	air
PORTVERSION=	1.4
CATEGORIES=	mail
MASTER_SITES=	ftp://renatasystems.org/pub/FreeBSD/ports/distfiles/
PKGNAMEPREFIX=	roundcube-

MAINTAINER=	alexey@renatasystems.org
COMMENT=	Theme for RoundCube Web Mail

RUN_DEPENDS=	roundcube>=0.3:${PORTSDIR}/mail/roundcube

NO_BUILD=	yes

WWWDIR?=	${PREFIX}/www/roundcube/skins/air

# This target is only meant to be used by the port maintainer.
x-generate-plist: build
	cd ${WRKSRC}; \
	${FIND} . ! -type d ! -name '*.orig' | ${SORT} | \
		${SED} -e "s,^\.,%%WWWDIR%%," >${.CURDIR}/pkg-plist.tmp ; \
	${FIND} . -type d | ${SORT} -r | ${SED} \
		-e "s,^\.$$,@dirrmtry %%WWWDIR%%," \
		-e "s,^\.,@dirrm %%WWWDIR%%," >>${.CURDIR}/pkg-plist.tmp

do-install:
	${MKDIR} ${WWWDIR}
	cd ${WRKSRC} && ${PAX} -r -w . ${WWWDIR}

.include <bsd.port.mk>
