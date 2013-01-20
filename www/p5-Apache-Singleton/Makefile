# Created by: ports@c0decafe.net
# $FreeBSD: ports/www/p5-Apache-Singleton/Makefile,v 1.7 2013/01/18 14:54:38 svnexp Exp $

PORTNAME=	Apache-Singleton
PORTVERSION=	0.15
CATEGORIES=	www devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	5u623l20@gmail.com
COMMENT=	Singleton class for mod_perl

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-Class-Singleton>=0:${PORTSDIR}/devel/p5-Class-Singleton

PERL_CONFIGURE=	yes

MAN3=	Apache::Singleton.3 \
	Apache::Singleton::Process.3 \
	Apache::Singleton::Request.3

.include <bsd.port.mk>
