# New ports collection makefile for:	p5-Net-Trac
# Date created:		2009-05-09
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/www/p5-Net-Trac/Makefile,v 1.7 2012/11/17 06:02:52 svnexp Exp $
#

PORTNAME=	Net-Trac
PORTVERSION=	0.16
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Net
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Interact with a remote Trac instance

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Any-Moose>0:${PORTSDIR}/devel/p5-Any-Moose \
		p5-DateTime>0:${PORTSDIR}/devel/p5-DateTime \
		p5-Lingua-EN-Inflect>0:${PORTSDIR}/textproc/p5-Lingua-EN-Inflect \
		p5-Params-Validate>0:${PORTSDIR}/devel/p5-Params-Validate \
		p5-Text-CSV>0:${PORTSDIR}/textproc/p5-Text-CSV \
		p5-URI>0:${PORTSDIR}/net/p5-URI \
		p5-WWW-Mechanize>=1.52:${PORTSDIR}/www/p5-WWW-Mechanize \
		p5-libwww>0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Net::Trac.3 \
		Net::Trac::Connection.3 \
		Net::Trac::Mechanize.3 \
		Net::Trac::Ticket.3 \
		Net::Trac::TicketAttachment.3 \
		Net::Trac::TicketHistory.3 \
		Net::Trac::TicketHistoryEntry.3 \
		Net::Trac::TicketPropChange.3 \
		Net::Trac::TicketSearch.3

.include <bsd.port.mk>
