# ex:ts=8
# Ports collection makefile for:	p5-Imager-Plot
# Date created:			Aug 31, 2004
# Whom:				ijliao
#
# $FreeBSD: ports/graphics/p5-Imager-Plot/Makefile,v 1.9 2012/11/17 05:58:17 svnexp Exp $
#

PORTNAME=	Imager-Plot
PORTVERSION=	0.09
PORTREVISION=	5
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl extension for generating fancy graphic plots in color

BUILD_DEPENDS=	p5-Imager>=0:${PORTSDIR}/graphics/p5-Imager
RUN_DEPENDS=	p5-Imager>=0:${PORTSDIR}/graphics/p5-Imager

PERL_CONFIGURE=	yes

MAN3=	Imager::Plot.3 Imager::Plot::Axis.3

.include <bsd.port.mk>
