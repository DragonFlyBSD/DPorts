# Created by: Dmitry Liakh <dliakh@ukr.net>
# $FreeBSD: mail/p5-MIME-AltWords/Makefile 338791 2014-01-05 16:08:00Z az $

PORTNAME=	MIME-AltWords
PORTVERSION=	0.12
CATEGORIES=	mail
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	dliakh@ukr.net
COMMENT=	Perl module for encoding and decoding MIME words

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -e '/NAME/ s|MIME-AltWords|MIME::AltWords|' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
