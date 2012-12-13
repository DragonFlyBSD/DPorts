# New ports collection makefile for:	p5-MIME-AltWords
# Date created:		Jun 06 2011
# Whom:			Dmitry Liakh <dliakh@ukr.net>
#
# $FreeBSD: ports/mail/p5-MIME-AltWords/Makefile,v 1.2 2012/11/17 05:59:08 svnexp Exp $
#

PORTNAME=	MIME-AltWords
PORTVERSION=	0.12
CATEGORIES=	mail
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	dliakh@ukr.net
COMMENT=	Perl module for encoding and decoding MIME words

PERL_CONFIGURE=	yes

MAN3=		MIME::AltWords.3 \
		MIME::AltWords0.3

post-patch:
	@${REINPLACE_CMD} -e '/NAME/ s|MIME-AltWords|MIME::AltWords|' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
