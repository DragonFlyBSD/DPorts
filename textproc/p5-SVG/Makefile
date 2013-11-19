# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: textproc/p5-SVG/Makefile 334223 2013-11-18 16:45:09Z mat $

PORTNAME=	SVG
PORTVERSION=	2.59
CATEGORIES=	textproc graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for generating Scalable Vector Graphics (SVG) documents

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

OPTIONS_DEFINE=	EXAMPLES

USES=		perl5 dos2unix
USE_PERL5=	configure

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MEXAMPLES}
	@${ECHO_MSG} "===>   Installing examples for ${PKGNAME}"
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}/
	${INSTALL_SCRIPT} ${WRKSRC}/examples/* ${STAGEDIR}${EXAMPLESDIR}/
.endif

.include <bsd.port.mk>
