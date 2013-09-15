# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: security/pam_ssh_agent_auth/Makefile 326980 2013-09-11 13:54:50Z az $

PORTNAME=	pam_ssh_agent_auth
PORTVERSION=	0.9.5
CATEGORIES=	security
MASTER_SITES=	SF/pamsshagentauth/${PORTNAME}/v${PORTVERSION}/

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PAM module which permits authentication via ssh-agent

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	ac_cv_func_strnvis=no
CONFIGURE_ARGS=	--libexecdir=${LOCALBASE}/lib
USES=		perl5

MAN8=		pam_ssh_agent_auth.8
PLIST_FILES=	lib/pam_ssh_agent_auth.so

.include <bsd.port.mk>
