# Created by: Anatoliy Dmytriyev
# $FreeBSD: net/p5-NetPacket/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	NetPacket
PORTVERSION=	1.4.1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tolid@tolid.eu.org
COMMENT=	Modules to assemble/disassemble network packets at the protocol level

LICENSE=	ART20

USES=		perl5
USE_PERL5=	modbuild

MAN3=		NetPacket.3 NetPacket::ARP.3 NetPacket::Ethernet.3 \
		NetPacket::ICMP.3 NetPacket::IGMP.3 NetPacket::UDP.3\
		NetPacket::IP.3 NetPacket::TCP.3 NetPacket::USBMon.3

NO_STAGE=	yes
.include <bsd.port.mk>
