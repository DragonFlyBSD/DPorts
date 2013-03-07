# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD: ports/devel/p5-Set-Infinite/Makefile,v 1.23 2013/02/05 18:52:49 svnexp Exp $

PORTNAME=	Set-Infinite
PORTVERSION=	0.65
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Set::Infinite - Sets of intervals

OPTIONS_DEFINE=	DOCS

PERL_CONFIGURE=	yes

MAN3=		Set::Infinite.3 Set::Infinite::Arithmetic.3 Set::Infinite::Basic.3
PORTDOCS=	Changes README TODO

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}/
	cd ${WRKSRC}/ && ${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}/
	@${ECHO_MSG} "===> Documentation installed in ${DOCSDIR}."
.endif

.include <bsd.port.mk>
