# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: www/p5-CGI-Compress-Gzip/Makefile 309167 2012-12-18 11:56:05Z tobez $

PORTNAME=	CGI-Compress-Gzip
PORTVERSION=	1.03
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CGI
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	CGI::Compress::Gzip - CGI with automatically compressed output

BUILD_DEPENDS=	p5-IO-Zlib>=1.01:${PORTSDIR}/archivers/p5-IO-Zlib
RUN_DEPENDS=	p5-IO-Zlib>=1.01:${PORTSDIR}/archivers/p5-IO-Zlib

PERL_MODBUILD=	yes

MAN3=	CGI::Compress::Gzip.3 \
	CGI::Compress::Gzip::FileHandle.3

.include <bsd.port.mk>
