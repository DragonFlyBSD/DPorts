# Created by: will
# $FreeBSD: math/p5-Math-Currency/Makefile 332813 2013-11-05 06:56:18Z vanilla $

PORTNAME=	Math-Currency
PORTVERSION=	0.47
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for exact currency math with formatting and rounding

BUILD_DEPENDS=	p5-Math-FixedPrecision>=0:${PORTSDIR}/math/p5-Math-FixedPrecision
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.if !defined(NOPORTDOCS)
PORTDOCS=	Changes

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}
	@${ECHO_MSG} "===> Documentation installed in ${DOCSDIR}."
.endif

.include <bsd.port.mk>
