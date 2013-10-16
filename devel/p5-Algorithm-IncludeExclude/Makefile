# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: devel/p5-Algorithm-IncludeExclude/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Algorithm-IncludeExclude
PORTVERSION=	0.01
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Build and evaluate include/exclude lists

BUILD_DEPENDS=	p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Algorithm::IncludeExclude.3

NO_STAGE=	yes
.include <bsd.port.mk>
