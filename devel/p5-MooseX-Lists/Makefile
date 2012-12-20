# New ports collection makefile for:  MooseX-Lists
# Date created: 09 April 2010
# Whom: andrey@kostenko.name
#
# $FreeBSD: ports/devel/p5-MooseX-Lists/Makefile,v 1.5 2012/11/17 05:56:23 svnexp Exp $

PORTNAME=	MooseX-Lists
PORTVERSION=	0.05
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Treat arrays and hashes as lists

RUN_DEPENDS=	p5-Moose>=0.93:${PORTSDIR}/devel/p5-Moose
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	YES
MAN3=	MooseX::Lists.3

.include <bsd.port.mk>
