# Created by: will
# $FreeBSD: math/p5-Bit-Vector/Makefile 324276 2013-08-05 15:05:29Z az $

PORTNAME=	Bit-Vector
PORTVERSION=	7.3
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Library of advanced math functions that includes a Perl OO module

RUN_DEPENDS=	p5-Carp-Clan>=0:${PORTSDIR}/devel/p5-Carp-Clan
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Bit::Vector.3 Bit::Vector::Overload.3 Bit::Vector::String.3

.include <bsd.port.mk>
