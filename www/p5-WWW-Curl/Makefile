# Created by: Chris Larsen <darth@vader.dk>
# $FreeBSD: www/p5-WWW-Curl/Makefile 322888 2013-07-13 05:44:58Z sunpoet $

PORTNAME=	WWW-Curl
PORTVERSION=	4.15
PORTREVISION=	1
CATEGORIES=	www ftp perl5
MASTER_SITES=	CPAN \
		http://curl.haxx.se/libcurl/perl/
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Perl extension interface for libcurl

LICENSE=	MIT

LIB_DEPENDS=	curl:${PORTSDIR}/ftp/curl

PERL_CONFIGURE=	yes

MAN3=		WWW::Curl.3

.include <bsd.port.mk>
