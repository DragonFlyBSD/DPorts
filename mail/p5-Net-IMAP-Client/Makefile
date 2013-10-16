# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: mail/p5-Net-IMAP-Client/Makefile 327742 2013-09-20 19:59:12Z bapt $

PORTNAME=	Net-IMAP-Client
PORTVERSION=	0.9501
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Not so simple IMAP client library

RUN_DEPENDS=	p5-List-MoreUtils>=0:${PORTSDIR}/lang/p5-List-MoreUtils \
		p5-IO-Socket-SSL>=0:${PORTSDIR}/security/p5-IO-Socket-SSL

USES=		perl5
USE_PERL5=	configure

MAN3=		Net::IMAP::Client.3 Net::IMAP::Client::MsgAddress.3 \
		Net::IMAP::Client::MsgSummary.3

NO_STAGE=	yes
.include <bsd.port.mk>
