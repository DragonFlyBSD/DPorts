# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: textproc/p5-CSS-Compressor/Makefile 319060 2013-05-25 15:45:21Z az $

PORTNAME=	CSS-Compressor
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	Perl extension for CSS minification

PERL_CONFIGURE=	yes

post-install:
	${INSTALL_SCRIPT} ${FILESDIR}/csscompressor ${PREFIX}/bin

MAN3=		CSS::Compressor.3

.include <bsd.port.mk>
