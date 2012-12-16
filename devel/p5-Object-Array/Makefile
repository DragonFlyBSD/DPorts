# New ports collection makefile for:	p5-Object-Array
# Date created:		2006-08-30
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/devel/p5-Object-Array/Makefile,v 1.5 2012/11/17 05:56:24 svnexp Exp $
#

PORTNAME=	Object-Array
PORTVERSION=	0.060
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	Array references with accessors

BUILD_DEPENDS=	p5-List-MoreUtils>=0:${PORTSDIR}/lang/p5-List-MoreUtils \
		p5-Sub-Exporter>=0:${PORTSDIR}/devel/p5-Sub-Exporter \
		p5-Sub-Install>=0:${PORTSDIR}/devel/p5-Sub-Install
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Object::Array.3 Object::Array::Plugin::Builtins.3 \
		Object::Array::Plugin::ListMoreUtils.3

.include <bsd.port.mk>
