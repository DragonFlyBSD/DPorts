# Created by: tobez
# $FreeBSD: devel/p5-Class-ReturnValue/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Class-ReturnValue
PORTVERSION=	0.55
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	A return-value object that can be treated as a boolean, array, or object

BUILD_DEPENDS=	p5-Devel-StackTrace>=0:${PORTSDIR}/devel/p5-Devel-StackTrace
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Class::ReturnValue.3

NO_STAGE=	yes
.include <bsd.port.mk>
