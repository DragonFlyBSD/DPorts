# Created by: will
# $FreeBSD: ports/math/p5-Bit-Vector/Makefile,v 1.22 2013/01/22 09:50:13 svnexp Exp $

PORTNAME=	Bit-Vector
PORTVERSION=	7.2
PORTREVISION=	2
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Library of advanced math functions that includes a Perl OO module

RUN_DEPENDS=	p5-Carp-Clan>=0:${PORTSDIR}/devel/p5-Carp-Clan
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Bit::Vector.3 Bit::Vector::Overload.3 Bit::Vector::String.3

.include <bsd.port.mk>
