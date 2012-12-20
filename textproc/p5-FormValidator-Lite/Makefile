# New ports collection makefile for:	p5-FormValidator-Lite
# Date created:		2009-03-09
# Whom:			TAKAHASHI Kaoru <kaoru@kaisei.org>
#
# $FreeBSD: ports/textproc/p5-FormValidator-Lite/Makefile,v 1.24 2012/11/17 06:02:04 svnexp Exp $
#

PORTNAME=	FormValidator-Lite
PORTVERSION=	0.29
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kaoru@kaisei.org
COMMENT=	Lightleight form validation library

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Class-Accessor-Lite>=0.05:${PORTSDIR}/devel/p5-Class-Accessor-Lite \
		p5-Class-Load>=0.11:${PORTSDIR}/devel/p5-Class-Load
RUN_DEPENDS=	p5-Class-Accessor-Lite>=0.05:${PORTSDIR}/devel/p5-Class-Accessor-Lite \
		p5-Class-Load>=0.11:${PORTSDIR}/devel/p5-Class-Load

TEST_DEPENDS=	p5-Test-Base>=0:${PORTSDIR}/devel/p5-Test-Base \
		p5-Test-Requires>=0.05:${PORTSDIR}/devel/p5-Test-Requires \
		p5-YAML>=0:${PORTSDIR}/textproc/p5-YAML

PERL_MODBUILD=	yes

MAN3=		FormValidator::Lite.3 \
		FormValidator::Lite::Constraint.3 \
		FormValidator::Lite::Constraint::Date.3 \
		FormValidator::Lite::Constraint::Default.3 \
		FormValidator::Lite::Constraint::Email.3 \
		FormValidator::Lite::Constraint::File.3 \
		FormValidator::Lite::Constraint::Japanese.3 \
		FormValidator::Lite::Constraint::Time.3 \
		FormValidator::Lite::Constraint::URL.3 \
		FormValidator::Lite::Messages::en.3 \
		FormValidator::Lite::Messages::ja.3

.include <bsd.port.mk>
