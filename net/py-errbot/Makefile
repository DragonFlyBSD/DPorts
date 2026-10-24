PORTNAME=	errbot
PORTVERSION=	6.2.1
CATEGORIES=	net python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Chatbot designed to be simple to extend with plugins
WWW=		https://errbot.readthedocs.io/en/latest/ \
		https://github.com/errbotio/errbot

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools>=0:devel/py-setuptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0:devel/py-wheel@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}ansi>=0.3.7:devel/py-ansi@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}colorlog>=6.10.1:devel/py-colorlog@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}daemonize>=2.5.0:devel/py-daemonize@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}deepmerge>=2.0:devel/py-deepmerge@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}dulwich>=1.2.1:devel/py-dulwich@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}flask>=3.1.3:www/py-flask@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}Jinja2>=3.1.6:devel/py-Jinja2@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}markdown>=3.10.2:textproc/py-markdown@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pygments>=2.20.0:textproc/py-pygments@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyopenssl>=26.1.0,1:security/py-pyopenssl@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>=2.32.5:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}webtest>=3.0.7:www/py-webtest@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent pep517

NO_ARCH=	yes

OPTIONS_DEFINE=	DISCORD IRC MATTERMOST SLACK TELEGRAM # XMPP
DISCORD_DESC=	Discord messaging support
IRC_DESC=	IRC messaging support
MATTERMOST_DESC=Mattermost messaging support
SLACK_DESC=	Slack messaging support
TELEGRAM_DESC=	Telegram messaging support
XMPP_DESC=	XMPP messaging support

DISCORD_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}err-backend-discord>=3.0.1:net/py-err-backend-discord@${PY_FLAVOR}
IRC_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}irc>=20.5.0:irc/py-irc@${PY_FLAVOR}
MATTERMOST_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}err-backend-mattermost>=3.0.0:net/py-err-backend-mattermost@${PY_FLAVOR}
SLACK_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}errbot-backend-slackv3>=0.3.2:net/py-errbot-backend-slackv3@${PY_FLAVOR}
TELEGRAM_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}python-telegram-bot>=13.15:net-im/py-python-telegram-bot@${PY_FLAVOR}
XMPP_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pyasn1>=0.6.3:devel/py-pyasn1@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}pyasn1-modules>=0.4.2:devel/py-pyasn1-modules@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}slixmpp>=1.15.0:net-im/py-slixmpp@${PY_FLAVOR}

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} >= 31300
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}legacy-cgi>=2.6.4:www/py-legacy-cgi@${PY_FLAVOR}
.endif

.include <bsd.port.post.mk>
