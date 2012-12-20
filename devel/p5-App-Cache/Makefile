# New ports collection makefile for:	p5-App-Cache
# Date created:			09 May 2006
# Whom:				Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-App-Cache/Makefile,v 1.13 2012/11/17 05:56:04 svnexp Exp $
#

PORTNAME=	App-Cache
PORTVERSION=	0.37
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Easy application-level caching

RUN_DEPENDS=	p5-Class-Accessor-Chained>=0:${PORTSDIR}/devel/p5-Class-Accessor-Chained \
		p5-File-Find-Rule>=0:${PORTSDIR}/devel/p5-File-Find-Rule \
		p5-File-HomeDir>=0:${PORTSDIR}/devel/p5-File-HomeDir \
		p5-Path-Class>=0:${PORTSDIR}/devel/p5-Path-Class \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		App::Cache.3

.include <bsd.port.mk>
