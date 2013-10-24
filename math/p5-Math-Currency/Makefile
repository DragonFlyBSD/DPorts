# Created by: will
# $FreeBSD: math/p5-Math-Currency/Makefile 331301 2013-10-22 16:57:44Z mat $

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
NO_STAGE=	yes

MAN3=		Math::Currency.3

.if !defined(NOPORTDOCS)
PORTDOCS=	Changes

post-install:
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
	@${ECHO_MSG} "===> Documentation installed in ${DOCSDIR}."
.endif

.include <bsd.port.mk>
