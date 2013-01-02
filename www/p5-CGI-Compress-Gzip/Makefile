# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: ports/www/p5-CGI-Compress-Gzip/Makefile,v 1.7 2012/12/18 12:03:17 svnexp Exp $

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
