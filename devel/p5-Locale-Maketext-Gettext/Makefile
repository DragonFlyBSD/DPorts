# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD: devel/p5-Locale-Maketext-Gettext/Makefile 332046 2013-10-30 02:52:46Z vanilla $

PORTNAME=	Locale-Maketext-Gettext
PORTVERSION=	1.28
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Joins gettext and Maketext frameworks

USES=		perl5
USE_PERL5=	configure

.if !defined(NOPORTDOCS)
PORTDOCS=	BUGS Changes README THANKS

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}
.endif

.include <bsd.port.mk>
