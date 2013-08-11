# Created by: tobez
# $FreeBSD: devel/p5-Class-ReturnValue/Makefile 324276 2013-08-05 15:05:29Z az $

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

.include <bsd.port.mk>
