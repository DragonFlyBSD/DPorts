# New ports collection makefile for:	p5-Tk-Sugar
# Date created:		2011-10-10
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD: ports/x11-toolkits/p5-Tk-Sugar/Makefile,v 1.2 2012/11/17 06:03:38 svnexp Exp $
#

PORTNAME=	Tk-Sugar
PORTVERSION=	1.093.190
CATEGORIES=	x11-toolkits tk perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Sugar syntax for Tk

BUILD_DEPENDS=	p5-Sub-Exporter>=0:${PORTSDIR}/devel/p5-Sub-Exporter
RUN_DEPENDS=	p5-Sub-Exporter>=0:${PORTSDIR}/devel/p5-Sub-Exporter

PERL_CONFIGURE=	yes

MAN3=		Tk::Sugar.3

.include <bsd.port.mk>
