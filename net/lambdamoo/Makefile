# Created by: Seiichirou Hiraoka
# $FreeBSD: net/lambdamoo/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	lambdamoo
PORTVERSION=	1.8.1
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	SF
DISTNAME=	LambdaMOO-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	The most commonly used program to run MOOs

WRKSRC=		${WRKDIR}/MOO-${PORTVERSION}
GNU_CONFIGURE=	yes
ALL_TARGET=
CONFIGURE_ENV=	YACC=${YACC}
USES=		bison

PLIST_FILES=	sbin/moo

PORTDOCS=	*

NO_STAGE=	yes
do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/moo ${PREFIX}/sbin

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@(cd ${WRKSRC};\
	${INSTALL_MAN} Minimal.db README README.Minimal \
		${DOCSDIR}; \
	)
	@${INSTALL_DATA} ${FILESDIR}/README.FreeBSD \
		${DOCSDIR}
.endif

.include <bsd.port.mk>
