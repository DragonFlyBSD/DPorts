# Created by: Frank Steinborn <steinex@nognu.de>
# $FreeBSD: comms/p5-SMS-SMS77/Makefile 325894 2013-09-01 18:09:54Z az $

PORTNAME=	SMS-SMS77
PORTVERSION=	0.01
CATEGORIES=	comms net perl5
MASTER_SITES=	http://www.w3r3wolf.de/files/sms77/
PKGNAMEPREFIX=	p5-

MAINTAINER=	steinex@nognu.de
COMMENT=	Perl interface and script to send SMS via SMS77.de

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww

MAN1=		sms77send.1
MAN3=		SMS::SMS77::Message.3 \
		SMS::SMS77.3

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
