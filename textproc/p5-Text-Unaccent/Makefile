# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: textproc/p5-Text-Unaccent/Makefile 333056 2013-11-07 03:52:41Z vanilla $

PORTNAME=	Text-Unaccent
PORTVERSION=	1.08
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Remove accents from a string

USES=		iconv perl5
USE_PERL5=	configure
CFLAGS+=	-DICONV_CONST=const

.include <bsd.port.mk>
