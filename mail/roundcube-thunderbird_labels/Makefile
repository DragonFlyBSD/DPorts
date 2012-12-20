# New ports collection makefile for:	roundcube-thunderbird_labels
# Date created:				27 Oct 2011
# Whom:					Alexander Moisseev <moiseev@mezonplus.ru>
#
# $FreeBSD: ports/mail/roundcube-thunderbird_labels/Makefile,v 1.4 2012/11/17 05:59:13 svnexp Exp $
#

PORTNAME=	thunderbird_labels
PORTVERSION=	0.8
CATEGORIES=	mail
MASTER_SITES=	http://rcmail-thunderbird-labels.googlecode.com/files/
PKGNAMEPREFIX=	roundcube-

MAINTAINER=	moiseev@mezonplus.ru
COMMENT=	Thunderbird Labels plugin for RoundCube webmail

LICENSE=	GPLv2

RUN_DEPENDS=	roundcube>=0.5:${PORTSDIR}/mail/roundcube

USE_BZIP2=	yes
NO_BUILD=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}
WWWDIR?=	${PREFIX}/www/roundcube/plugins/${PORTNAME}

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
