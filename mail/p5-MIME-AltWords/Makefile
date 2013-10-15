# Created by: Dmitry Liakh <dliakh@ukr.net>
# $FreeBSD: mail/p5-MIME-AltWords/Makefile 327742 2013-09-20 19:59:12Z bapt $

PORTNAME=	MIME-AltWords
PORTVERSION=	0.12
CATEGORIES=	mail
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	dliakh@ukr.net
COMMENT=	Perl module for encoding and decoding MIME words

USES=		perl5
USE_PERL5=	configure

MAN3=		MIME::AltWords.3 \
		MIME::AltWords0.3

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e '/NAME/ s|MIME-AltWords|MIME::AltWords|' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
