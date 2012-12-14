# New ports collection makefile for:	p5-Audio-CD
# Date created:				22 Oct 2000
# Whom:	      				Roman Shterenzon <roman@xpert.com>
#
# $FreeBSD: ports/audio/p5-Audio-CD/Makefile,v 1.9 2012/11/17 05:54:40 svnexp Exp $
#

PORTNAME=	Audio-CD
PORTVERSION=	0.04
PORTREVISION=	1
CATEGORIES=	audio perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl interface to libcdaudio (cd + cddb)

LIB_DEPENDS=	cdaudio.1:${PORTSDIR}/audio/libcdaudio

PERL_CONFIGURE=	YES
CONFIGURE_ARGS=	INC="-I${LOCALBASE}/include " \
		LIBS="-L${LOCALBASE}/lib -lcdaudio"

MAN3=		Audio::CD.3

.include <bsd.port.mk>
