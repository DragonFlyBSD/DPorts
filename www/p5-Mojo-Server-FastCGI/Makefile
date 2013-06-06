# Created by: Dikshie <dikshie@sfc.wide.ad.jp>
# $FreeBSD: www/p5-Mojo-Server-FastCGI/Makefile 319236 2013-05-27 13:21:31Z culot $

PORTNAME=	Mojo-Server-FastCGI
PORTVERSION=	0.41
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ARPI
PKGNAMEPREFIX=	p5-

MAINTAINER=	dikshie@sfc.wide.ad.jp
COMMENT=	Mojo Server FastCGI

LICENSE=	ART20

RUN_DEPENDS=	p5-Mojolicious>=3.21:${PORTSDIR}/www/p5-Mojolicious

PERL_CONFIGURE=	yes

MAN3=		Mojolicious::Command::fastcgi.3 \
		Mojo::Server::FastCGI.3

.include <bsd.port.mk>
