# New ports collection makefile for:	p5-MooseX-Object-Pluggable
# Date created:		2009-08-31
# Whom:			Ashish SHUKLA <wahjava@gmail.com>
#
# $FreeBSD: ports/devel/p5-MooseX-Object-Pluggable/Makefile,v 1.5 2012/11/17 05:56:23 svnexp Exp $
#

PORTNAME=	MooseX-Object-Pluggable
PORTVERSION=	0.0011
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ashish@FreeBSD.org
COMMENT=	Make your classes pluggable

BUILD_DEPENDS=	p5-Moose>=0.35:${PORTSDIR}/devel/p5-Moose
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	MooseX::Object::Pluggable.3

.include <bsd.port.mk>
