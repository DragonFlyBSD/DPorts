# New ports collection makefile for:	Plack::Middleware::AddDefaultCharset
# Date created:		02 Nov 2010
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-Plack-Middleware-AddDefaultCharset/Makefile,v 1.3 2012/11/17 06:02:53 svnexp Exp $
#

PORTNAME=	Plack-Middleware-AddDefaultCharset
PORTVERSION=	0.02
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to port Apache2 AddDefaultCharset for Plack

RUN_DEPENDS=	\
	p5-Plack>=0.9925:${PORTSDIR}/www/p5-Plack
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Plack::Middleware::AddDefaultCharset.3

.include <bsd.port.mk>
