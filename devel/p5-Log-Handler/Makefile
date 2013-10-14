# Created by: Sahil Tandon <sahil@tandon.net>
# $FreeBSD: devel/p5-Log-Handler/Makefile 329418 2013-10-05 06:06:03Z sunpoet $

PORTNAME=	Log-Handler
PORTVERSION=	0.80
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Object-oriented handler for logging, tracing, and debugging in Perl

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Params-Validate>=0:${PORTSDIR}/devel/p5-Params-Validate
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI \
		p5-Email-Date>=0:${PORTSDIR}/mail/p5-Email-Date

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
