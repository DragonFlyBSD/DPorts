# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD: devel/p5-Set-Infinite/Makefile 332205 2013-10-31 07:36:25Z vanilla $

PORTNAME=	Set-Infinite
PORTVERSION=	0.65
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Set::Infinite - Sets of intervals

OPTIONS_DEFINE=	DOCS

USES=		perl5
USE_PERL5=	configure

PORTDOCS=	Changes README TODO

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}/
	cd ${WRKSRC}/ && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}/
.endif

.include <bsd.port.mk>
