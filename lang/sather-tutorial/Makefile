# Created by: Stanislav Sedov <ssedov@mbsd.msk.ru>
# $FreeBSD: lang/sather-tutorial/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	tutorial
PORTVERSION=	000328
PORTREVISION=	1
CATEGORIES=	lang
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=sather/Doc
PKGNAMEPREFIX=	sather-
DISTNAME=	${PKGNAMEPREFIX}${PORTNAME}-${PORTVERSION}.html

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A tutorial on the Sather programming language

NO_BUILD=	yes
NO_WRKSUBDIR=	yes
DOCSDIR=	${PREFIX}/share/doc/sather/${PORTNAME}

NO_STAGE=	yes
do-install:
	${MKDIR} ${DOCSDIR}
	@${TAR} -xzf ${DISTDIR}/${DISTFILES} -C ${DOCSDIR}
	@${FIND} ${DOCSDIR}/ -type f -exec ${CHMOD} ${SHAREMODE} {} \;
	${CHOWN} -R ${SHAREOWN}:${SHAREGRP} ${DOCSDIR}/

.include <bsd.port.mk>
