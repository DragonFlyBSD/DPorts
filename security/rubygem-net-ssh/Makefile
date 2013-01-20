# Created by: Roderick van Domburg <r.s.a.vandomburg@student.utwente.nl>
# $FreeBSD: ports/security/rubygem-net-ssh/Makefile,v 1.33 2013/01/08 00:51:25 svnexp Exp $
#
# Remeber to check sysutils/rubygem-chef

PORTNAME=	net-ssh
PORTVERSION=	2.2.2
PORTEPOCH=	2
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Non-interactive SSH processing

OPTIONS_DEFINE=	PROMPT_PASSPHRASES
PROMPT_PASSPHRASES_DESC=	Prompt for passphrases on keys
OPTIONSFILE?=	${PORT_DBDIR}/rubygem-${PORTNAME}/options

OPTIONS_DEFAULT=	PROMPT_PASSPHRASES

# to get RUBY_SITEARCHLIBDIR
USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MPROMPT_PASSPHRASES}
RUN_DEPENDS+=	rubygem-ruby-termios>=0:${PORTSDIR}/comms/rubygem-ruby-termios
.endif

.include <bsd.port.mk>
