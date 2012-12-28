# Created by: Ben Smithurst <ben@FreeBSD.org>
# $FreeBSD: ports/mail/p5-Mail-Sender/Makefile,v 1.20 2012/12/15 18:19:42 svnexp Exp $

PORTNAME=	Mail-Sender
PORTVERSION=	0.8.22
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Module for sending mails with attachments through an SMTP server

PERL_CONFIGURE=	yes

MAN3=		Mail::Sender.3

post-patch:
.if defined(BATCH)
	@${PERL} -pi -e 's/res = <STDIN>;/res = "N";/' ${WRKSRC}/Config.PL
.endif

.include <bsd.port.mk>
