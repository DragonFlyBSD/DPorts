# New ports collection makefile for:	devel/p5-Class-Spiffy
# Date created:				20 January 2006
# Whom:					Anton Berezin <tobez@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Class-Spiffy/Makefile,v 1.8 2012/11/17 05:56:08 svnexp Exp $
#

PORTNAME=	Class-Spiffy
PORTVERSION=	0.15
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Class::Spiffy - Spiffy Perl Interface Framework For You

BUILD_DEPENDS=	p5-Scalar-List-Utils>=0:${PORTSDIR}/lang/p5-Scalar-List-Utils
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Class::Spiffy.3

.include <bsd.port.mk>
