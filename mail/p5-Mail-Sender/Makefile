# Created by: Ben Smithurst <ben@FreeBSD.org>
# $FreeBSD: mail/p5-Mail-Sender/Makefile 324276 2013-08-05 15:05:29Z az $

PORTNAME=	Mail-Sender
PORTVERSION=	0.8.22
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Module for sending mails with attachments through an SMTP server

USES=		perl5
USE_PERL5=	configure

MAN3=		Mail::Sender.3

post-patch:
.if defined(BATCH)
	@${REINPLACE_CMD}  -e 's/res = <STDIN>;/res = "N";/' ${WRKSRC}/Config.PL
.endif

.include <bsd.port.mk>
